/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface BKSTouchAnnotation : NSObject <NSSecureCoding, BSDescriptionProviding> {

	unsigned _touchIdentifier;
	NSString* _text;
	NSString* _uniqueIdentifier;

}

@property (assign,nonatomic) unsigned touchIdentifier;               //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
@property (nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)succinctDescription;
-(unsigned)touchIdentifier;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setText:(NSString *)arg1 ;
-(void)setTouchIdentifier:(unsigned)arg1 ;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

