/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString;

@interface WLKVideoAsset : NSObject {

	NSString* _URL;
	NSString* _programID;
	NSString* _assetID;

}

@property (nonatomic,copy,readonly) NSString * URL;                    //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * programID;              //@synthesize programID=_programID - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetID;                //@synthesize assetID=_assetID - In the implementation block
-(NSString *)assetID;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)URL;
-(NSString *)programID;
@end

