/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@class LSApplicationProxy, NSDictionary, NSBundle, NSString, NSNumber, NSDate;

@interface GKApplicationProxy : NSObject {

	LSApplicationProxy* _lsProxy;
	NSDictionary* _metadata;

}

@property (nonatomic,retain) LSApplicationProxy * lsProxy;                                     //@synthesize lsProxy=_lsProxy - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain,readonly) NSBundle * bundle; 
@property (nonatomic,retain,readonly) NSString * bundleVersion; 
@property (nonatomic,retain,readonly) NSString * bundleShortVersion; 
@property (nonatomic,retain,readonly) NSString * bundleID; 
@property (nonatomic,retain,readonly) NSNumber * adamID; 
@property (nonatomic,retain,readonly) NSNumber * externalVersion; 
@property (nonatomic,retain,readonly) NSDate * purchaseDate; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
+(id)metadataForBundleURL:(id)arg1 ;
-(void)dealloc;
-(id)bundleURL;
-(NSBundle *)bundle;
-(BOOL)isInstalled;
-(BOOL)isRestricted;
-(NSString *)bundleID;
-(NSString *)bundleVersion;
-(BOOL)isGameCenterEnabled;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(NSNumber *)adamID;
-(id)initWithBundleID:(id)arg1 ;
-(NSDate *)purchaseDate;
-(NSString *)bundleShortVersion;
-(id)initWithProxy:(id)arg1 ;
-(NSNumber *)externalVersion;
-(void)setLsProxy:(LSApplicationProxy *)arg1 ;
-(LSApplicationProxy *)lsProxy;
@end

