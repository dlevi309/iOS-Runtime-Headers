/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <libobjc.A.dylib/PMSliderProviderProtocol.h>

@protocol PMEditProviderDelegate;
@class VEKProduction, NSArray, NSString;

@interface PMDurationProvider : NSObject <PMSliderProviderProtocol> {

	VEKProduction* _production;
	id<PMEditProviderDelegate> _delegate;
	unsigned long long _selectedIndex;
	double _maxDuration;
	double _customDuration;
	double _currentDuration;
	NSArray* _localizedDurations;

}

@property (nonatomic,retain) NSArray * localizedDurations;                            //@synthesize localizedDurations=_localizedDurations - In the implementation block
@property (assign,nonatomic) double currentDuration;                                  //@synthesize currentDuration=_currentDuration - In the implementation block
@property (assign,nonatomic) double maxDuration;                                      //@synthesize maxDuration=_maxDuration - In the implementation block
@property (assign,nonatomic) double customDuration;                                   //@synthesize customDuration=_customDuration - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                        //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) VEKProduction * production;                              //@synthesize production=_production - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)maxDuration;
-(unsigned long long)numberOfItems;
-(id<PMEditProviderDelegate>)delegate;
-(void)updateWithResult:(id)arg1 ;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<PMEditProviderDelegate>)arg1 ;
-(unsigned long long)selectedIndex;
-(VEKProduction *)production;
-(double)currentDuration;
-(void)setCurrentDuration:(double)arg1 ;
-(void)setMaxDuration:(double)arg1 ;
-(void)setProduction:(VEKProduction *)arg1 ;
-(double)customDuration;
-(void)setCustomDuration:(double)arg1 andEdit:(BOOL)arg2 ;
-(id)initWithProduction:(id)arg1 ;
-(id)displayNameForIndex:(unsigned long long)arg1 ;
-(void)willBeginScrolling;
-(void)updateLocalizedNames;
-(void)setLocalizedDurations:(NSArray *)arg1 ;
-(void)setCustomDuration:(double)arg1 ;
-(NSArray *)localizedDurations;
@end

