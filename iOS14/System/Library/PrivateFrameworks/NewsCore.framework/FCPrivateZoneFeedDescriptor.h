/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedDescriptor.h>

@class FCPrivateDataController;

@interface FCPrivateZoneFeedDescriptor : FCFeedDescriptor {

	FCPrivateDataController* _privateDataController;

}

@property (nonatomic,retain) FCPrivateDataController * privateDataController;              //@synthesize privateDataController=_privateDataController - In the implementation block
-(id)backingHeadlineIDs;
-(id)initWithPrivateDataController:(id)arg1 identifier:(id)arg2 ;
-(FCPrivateDataController *)privateDataController;
-(void)setPrivateDataController:(FCPrivateDataController *)arg1 ;
-(id)streamOfLatestHeadlinesWithContext:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

