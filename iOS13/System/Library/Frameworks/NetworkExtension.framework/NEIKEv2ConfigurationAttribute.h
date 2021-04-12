/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)attributeName;
-(NSString *)customAttributeName;
-(id)initEmptyRequest;
-(void)setCustomAttributeName:(NSString *)arg1 ;
@end

