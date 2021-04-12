/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

@class NSString, NSArray, NSURL;


@protocol WLKInstallable <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * appBundleIDs; 
@property (nonatomic,copy,readonly) NSArray * appAdamIDs; 
@property (nonatomic,copy,readonly) NSURL * appStoreURL; 
@required
-(NSString *)name;
-(NSURL *)appStoreURL;
-(NSArray *)appAdamIDs;
-(NSArray *)appBundleIDs;
-(id)appIconURLForSize:(CGSize)arg1;

@end

