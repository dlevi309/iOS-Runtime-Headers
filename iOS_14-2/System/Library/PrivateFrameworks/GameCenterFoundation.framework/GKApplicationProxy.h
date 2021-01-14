/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSBundle *)bundle;
-(BOOL)isRestricted;
-(id)initWithProxy:(id)arg1 ;
-(id)bundleURL;
-(void)setLsProxy:(LSApplicationProxy *)arg1 ;
-(BOOL)isInstalled;
-(NSDate *)purchaseDate;
-(NSString *)bundleVersion;
-(id)initWithBundleID:(id)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(LSApplicationProxy *)lsProxy;
-(BOOL)isGameCenterEnabled;
-(NSNumber *)adamID;
-(NSString *)bundleID;
-(NSString *)bundleShortVersion;
-(NSDictionary *)metadata;
-(NSNumber *)externalVersion;
-(void)dealloc;
@end

