/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSyncFakeBaseItem.h>
#import <MapsSuggestions/MapsSyncHistoryItem.h>

@class NSUUID, NSDate, NSString;

@interface MapsSyncFakeHistoryItem : MapsSyncFakeBaseItem <MapsSyncHistoryItem> {

	BOOL _test_isDeleted;

}

@property (assign,nonatomic) BOOL test_isDeleted;                     //@synthesize test_isDeleted=_test_isDeleted - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * createTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteWithCompletion:(/*^block*/id)arg1 ;
-(void)setTest_isDeleted:(BOOL)arg1 ;
-(BOOL)test_isDeleted;
@end

