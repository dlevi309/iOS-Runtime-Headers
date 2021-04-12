/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSProgressReportingCapability : CLSObject <CLSRelationable> {

	long long _kind;
	NSString* _details;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long kind;                        //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * details;                      //@synthesize details=_details - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)dictionaryRepresentation;
-(void)setDetails:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)kind;
-(NSString *)description;
-(void)setKind:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)details;
-(void)mergeWithObject:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(id)initWithKind:(long long)arg1 details:(id)arg2 ;
@end

