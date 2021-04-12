/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedDescriptor.h>

@class FCPrivateDataController;

@interface FCPrivateZoneFeedDescriptor : FCFeedDescriptor {

	FCPrivateDataController* _privateDataController;

}

@property (nonatomic,retain) FCPrivateDataController * privateDataController;              //@synthesize privateDataController=_privateDataController - In the implementation block
-(id)initWithIdentifier:(id)arg1 ;
-(id)streamOfLatestHeadlinesWithContext:(id)arg1 ;
-(id)backingHeadlineIDs;
-(id)initWithPrivateDataController:(id)arg1 identifier:(id)arg2 ;
-(FCPrivateDataController *)privateDataController;
-(void)setPrivateDataController:(FCPrivateDataController *)arg1 ;
@end

