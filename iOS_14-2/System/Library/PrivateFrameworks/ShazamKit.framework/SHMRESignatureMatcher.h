/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/SHMatcher.h>

@protocol SHMatcherDelegate;
@class MRE, SHLocalStore, NSString;

@interface SHMRESignatureMatcher : NSObject <SHMatcher> {

	id<SHMatcherDelegate> delegate;
	MRE* _mre;
	SHLocalStore* _localStore;

}

@property (nonatomic,retain) MRE * mre;                                          //@synthesize mre=_mre - In the implementation block
@property (nonatomic,retain) SHLocalStore * localStore;                          //@synthesize localStore=_localStore - In the implementation block
@property (assign,nonatomic,__weak) id<SHMatcherDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalStore:(SHLocalStore *)arg1 ;
-(SHLocalStore *)localStore;
-(MRE *)mre;
-(id<SHMatcherDelegate>)delegate;
-(void)setDelegate:(id<SHMatcherDelegate>)arg1 ;
-(void)setMre:(MRE *)arg1 ;
-(id)initWithLocalStore:(id)arg1 ;
-(void)buildMRE;
-(void)matchSignature:(id)arg1 ;
-(id)MRESignaturesFromMatches:(id)arg1 ;
-(long long)storeDensityToMREDensity:(long long)arg1 ;
-(id)mediaItemsFromMREResult:(id)arg1 ;
@end

