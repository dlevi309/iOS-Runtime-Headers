/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/STSiriModelObject.h>
#import <libobjc.A.dylib/AFTranscriptionType.h>

@class NSSet, NSString;

@interface STPerson : STSiriModelObject <AFTranscriptionType> {

	NSSet* _contactHandles;
	NSString* _fullName;

}

@property (nonatomic,copy) NSSet * contactHandles;                  //@synthesize contactHandles=_contactHandles - In the implementation block
@property (nonatomic,copy) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSSet *)contactHandles;
-(void)setContactHandles:(NSSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

