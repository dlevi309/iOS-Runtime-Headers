/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/SHMatcher.h>

@protocol SHMatcherDelegate;
@class MRE, SHLocalConfiguration, NSString;

@interface SHMRESignatureMatcher : NSObject <SHMatcher> {

	id<SHMatcherDelegate> delegate;
	MRE* _mre;
	SHLocalConfiguration* _localConfiguration;

}

@property (nonatomic,retain) MRE * mre;                                              //@synthesize mre=_mre - In the implementation block
@property (nonatomic,retain) SHLocalConfiguration * localConfiguration;              //@synthesize localConfiguration=_localConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SHMatcherDelegate> delegate; 
-(void)match:(id)arg1 ;
-(id<SHMatcherDelegate>)delegate;
-(void)setDelegate:(id<SHMatcherDelegate>)arg1 ;
-(id)initWithLocalRecognitionConfiguration:(id)arg1 ;
-(void)buildMRE;
-(SHLocalConfiguration *)localConfiguration;
-(id)MRESignaturesFromMatches:(id)arg1 ;
-(MRE *)mre;
-(id)mediaItemsFromMREResult:(id)arg1 ;
-(void)setMre:(MRE *)arg1 ;
-(void)setLocalConfiguration:(SHLocalConfiguration *)arg1 ;
@end

