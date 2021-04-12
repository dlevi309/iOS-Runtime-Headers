/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3DAAPImportOperation.h>

@interface ML3PurchaseHistoryImportOperation : ML3DAAPImportOperation
-(void)main;
-(unsigned long long)importSource;
-(shared_ptr<ML3DAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<ML3CPP::Element>*)arg1 ;
-(void)updateImportProgress:(float)arg1 ;
-(BOOL)_performPurchaseHistoryImportWithTransaction:(id)arg1 ;
@end

