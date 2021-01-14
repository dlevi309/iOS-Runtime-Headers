/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol CKTranscriptBalloonSelectionManagerDelegate, CKTranscriptBalloonSelectionManagerDataSource;
@class NSString, NSMutableOrderedSet, NSMutableDictionary, NSArray;

@interface CKTranscriptBalloonSelectionManager : NSObject <NSFastEnumeration> {

	id<CKTranscriptBalloonSelectionManagerDelegate> _delegate;
	id<CKTranscriptBalloonSelectionManagerDataSource> _dataSource;
	NSString* _trackedGuid;
	NSMutableOrderedSet* _selectedMessageGuids;
	NSMutableDictionary* _selectedStates;

}

@property (nonatomic,retain) NSMutableOrderedSet * selectedMessageGuids;                                       //@synthesize selectedMessageGuids=_selectedMessageGuids - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * selectedStates;                                             //@synthesize selectedStates=_selectedStates - In the implementation block
@property (nonatomic,retain) NSString * trackedGuid;                                                           //@synthesize trackedGuid=_trackedGuid - In the implementation block
@property (nonatomic,readonly) NSArray * chatItems; 
@property (assign,nonatomic,__weak) id<CKTranscriptBalloonSelectionManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CKTranscriptBalloonSelectionManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedGuidCount; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CK22*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id<CKTranscriptBalloonSelectionManagerDelegate>)delegate;
-(id<CKTranscriptBalloonSelectionManagerDataSource>)dataSource;
-(NSArray *)chatItems;
-(void)setDelegate:(id<CKTranscriptBalloonSelectionManagerDelegate>)arg1 ;
-(void)setDataSource:(id<CKTranscriptBalloonSelectionManagerDataSource>)arg1 ;
-(NSString *)trackedGuid;
-(BOOL)isMessageGuidSelected:(id)arg1 ;
-(void)addSelectedMessageGuid:(id)arg1 selectionState:(id)arg2 ;
-(void)removeAllSelectedMessageGuids;
-(void)removeSelectedMessageGuid:(id)arg1 ;
-(id)selectedStateForGuid:(id)arg1 ;
-(unsigned long long)selectedGuidCount;
-(void)trackSelectedGuid:(id)arg1 selectionState:(id)arg2 ;
-(void)removeAllSelectedMessageGuidsExceptTrackedGuid;
-(void)setSelectedGuids:(id)arg1 ;
-(id)_chatItemForGUID:(id)arg1 ;
-(long long)indexOfGuid:(id)arg1 inChatItems:(id)arg2 ;
-(NSMutableOrderedSet *)selectedMessageGuids;
-(NSMutableDictionary *)selectedStates;
-(void)setTrackedGuid:(NSString *)arg1 ;
-(id)selectedGuidAtIndex:(unsigned long long)arg1 ;
-(void)removeTrackedGuid;
-(void)setSelectedMessageGuids:(NSMutableOrderedSet *)arg1 ;
-(void)setSelectedStates:(NSMutableDictionary *)arg1 ;
@end

