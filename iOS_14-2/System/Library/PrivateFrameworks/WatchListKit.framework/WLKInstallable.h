/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)appBundleIDs;
-(NSURL *)appStoreURL;
-(NSArray *)appAdamIDs;
-(id)appIconURLForSize:(CGSize)arg1;

@end

