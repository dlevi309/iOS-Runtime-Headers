/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface DIAttributeDocument : DIAttribute <NSSecureCoding> {

	NSArray* currentValue;
	NSString* _idDocType;
	unsigned long long _docType;
	NSArray* _acceptableDocs;
	unsigned long long _acceptableDocTypes;

}

@property (assign,nonatomic) unsigned long long acceptableDocTypes;                    //@synthesize acceptableDocTypes=_acceptableDocTypes - In the implementation block
@property (nonatomic,copy) NSArray * acceptableDocs;                                   //@synthesize acceptableDocs=_acceptableDocs - In the implementation block
@property (nonatomic,retain) NSString * idDocType;                                     //@synthesize idDocType=_idDocType - In the implementation block
@property (assign,nonatomic) unsigned long long docType;                               //@synthesize docType=_docType - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) NSArray * currentValue; 
+(BOOL)supportsSecureCoding;
-(id)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)docType;
-(void)setDocType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)acceptableDocTypes;
-(NSArray *)acceptableDocs;
-(void)setCurrentValue:(NSArray *)arg1 ;
-(id)getCurrentValue;
-(id)initWithAcceptableDocs:(id)arg1 ;
-(NSString *)idDocType;
-(void)setIdDocType:(NSString *)arg1 ;
-(void)setAcceptableDocs:(NSArray *)arg1 ;
-(void)setAcceptableDocTypes:(unsigned long long)arg1 ;
@end

