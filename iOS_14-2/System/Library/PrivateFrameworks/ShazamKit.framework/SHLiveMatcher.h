/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/SHLocalStoreDelegate.h>
#import <libobjc.A.dylib/SHMatcher.h>

@protocol SHMatcherDelegate;
@class SHLocalStore, SHMRESignatureMatcher, SHMutableSignature, NSMutableArray, NSString;

@interface SHLiveMatcher : NSObject <SHLocalStoreDelegate, SHMatcher> {

	id<SHMatcherDelegate> delegate;
	SHLocalStore* _localStore;
	SHMRESignatureMatcher* _mreMatcher;
	SHMutableSignature* _mutableSignature;
	NSMutableArray* _referenceSignagures;

}

@property (nonatomic,retain) SHLocalStore * localStore;                          //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) SHMRESignatureMatcher * mreMatcher;                 //@synthesize mreMatcher=_mreMatcher - In the implementation block
@property (nonatomic,retain) SHMutableSignature * mutableSignature;              //@synthesize mutableSignature=_mutableSignature - In the implementation block
@property (nonatomic,retain) NSMutableArray * referenceSignagures;               //@synthesize referenceSignagures=_referenceSignagures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SHMatcherDelegate> delegate; 
-(void)setLocalStore:(SHLocalStore *)arg1 ;
-(SHLocalStore *)localStore;
-(id<SHMatcherDelegate>)delegate;
-(void)setDelegate:(id<SHMatcherDelegate>)arg1 ;
-(void)matchSignature:(id)arg1 ;
-(void)bufferProduced:(id)arg1 atTime:(id)arg2 ;
-(id)initWithLiveStore:(id)arg1 ;
-(id)buildRollingSignature;
-(SHMRESignatureMatcher *)mreMatcher;
-(SHMutableSignature *)mutableSignature;
-(void)buildMREForSignatures:(id)arg1 ;
-(void)setMreMatcher:(SHMRESignatureMatcher *)arg1 ;
-(void)setMutableSignature:(SHMutableSignature *)arg1 ;
-(NSMutableArray *)referenceSignagures;
-(void)setReferenceSignagures:(NSMutableArray *)arg1 ;
@end

