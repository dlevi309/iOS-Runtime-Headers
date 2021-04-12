/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/


@class USKToken, USKObjectPath, NSDictionary;

@interface USKObject : NSObject {

	USKToken* _name;
	USKObjectPath* _path;

}

@property (nonatomic,retain,readonly) USKToken * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) USKObjectPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
-(USKObjectPath *)path;
-(USKToken *)name;
-(NSDictionary *)metadata;
@end

