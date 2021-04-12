/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)URL;
-(NSString *)assetID;
-(NSString *)programID;
@end

