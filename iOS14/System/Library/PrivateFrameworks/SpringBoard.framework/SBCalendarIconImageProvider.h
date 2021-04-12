/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBDateTimeOverrideObserver.h>

@protocol SBCalendarIconImageProviderDelegate;
@class SBFDateTimeController, NSString;

@interface SBCalendarIconImageProvider : NSObject <SBDateTimeOverrideObserver> {

	id<SBCalendarIconImageProviderDelegate> _delegate;
	SBFDateTimeController* _dateTimeController;

}

@property (assign,nonatomic,__weak) id<SBCalendarIconImageProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SBFDateTimeController * dateTimeController;                         //@synthesize dateTimeController=_dateTimeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(void)localeChanged;
-(id)init;
-(id<SBCalendarIconImageProviderDelegate>)delegate;
-(void)setDelegate:(id<SBCalendarIconImageProviderDelegate>)arg1 ;
-(id)unmaskedIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(SBFDateTimeController *)dateTimeController;
-(void)reloadIconImage;
-(id)iconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)dealloc;
-(id)initWithDateTimeController:(id)arg1 ;
-(void)_startListeningForSignificantTimeChanges;
-(void)_stopListeningForSignificantTimeChanges;
-(id)preparedISIcon;
@end

