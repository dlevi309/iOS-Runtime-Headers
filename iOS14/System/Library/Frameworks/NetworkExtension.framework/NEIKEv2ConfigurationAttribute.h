/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NSString;

@interface NEIKEv2ConfigurationAttribute : NSObject {

	NSString* _customAttributeName;

}

@property (retain) NSString * customAttributeName;                  //@synthesize customAttributeName=_customAttributeName - In the implementation block
@property (readonly) unsigned long long attributeType; 
@property (readonly) unsigned long long valueType; 
+(id)copyTypeDescription;
-(unsigned long long)valueType;
-(unsigned long long)attributeType;
-(NSString *)customAttributeName;
-(id)initEmptyRequest;
-(void)setCustomAttributeName:(NSString *)arg1 ;
-(id)attributeName;
@end

