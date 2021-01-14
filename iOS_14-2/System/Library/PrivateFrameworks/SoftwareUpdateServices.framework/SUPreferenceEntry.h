/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@class NSString;

@interface SUPreferenceEntry : NSObject {

	NSString* _preferenceKey;
	long long _type;
	NSString* _description;

}

@property (nonatomic,retain,readonly) NSString * preferenceKey;              //@synthesize preferenceKey=_preferenceKey - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSString * description;                //@synthesize description=_description - In the implementation block
-(NSString *)description;
-(long long)type;
-(NSString *)preferenceKey;
-(id)initWithKey:(id)arg1 type:(long long)arg2 description:(id)arg3 ;
@end

