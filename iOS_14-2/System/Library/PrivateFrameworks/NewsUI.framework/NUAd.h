/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdContextProvider.h>

@class NSString, NUAdBannerView, NSDate;

@interface NUAd : NSObject <NUAdContextProvider> {

	NSString* _identifier;
	NUAdBannerView* _bannerView;
	NSString* _opportunityIdentifier;
	NSDate* _creationDate;
	NSDate* _loadDate;
	NSDate* _unloadDate;
	unsigned long long _state;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) NUAdBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,readonly) NSString * opportunityIdentifier;              //@synthesize opportunityIdentifier=_opportunityIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                         //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * loadDate;                               //@synthesize loadDate=_loadDate - In the implementation block
@property (nonatomic,retain) NSDate * unloadDate;                             //@synthesize unloadDate=_unloadDate - In the implementation block
@property (assign,nonatomic) unsigned long long state;                        //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)loadDate;
-(void)setBannerView:(NUAdBannerView *)arg1 ;
-(NSDate *)creationDate;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)setLoadDate:(NSDate *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NUAdBannerView *)bannerView;
-(id)adContextValueForKeyPath:(id)arg1 ;
-(NSString *)opportunityIdentifier;
-(id)initWithBanner:(id)arg1 identifier:(id)arg2 ;
-(NSDate *)unloadDate;
-(void)setUnloadDate:(NSDate *)arg1 ;
@end

