/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMListChangeItem, NSArray;

@interface REMListShareeContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (nonatomic,readonly) NSArray * sharees; 
-(NSArray *)sharees;
-(void)removeSharee:(id)arg1 ;
-(void)addSharee:(id)arg1 ;
-(REMListChangeItem *)listChangeItem;
-(id)initWithListChangeItem:(id)arg1 ;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
-(id)addShareeWithDisplayName:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 namePrefix:(id)arg5 nameSuffix:(id)arg6 nickname:(id)arg7 address:(id)arg8 status:(long long)arg9 accessLevel:(long long)arg10 ;
-(id)addShareeWithDisplayName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 address:(id)arg4 status:(long long)arg5 accessLevel:(long long)arg6 ;
-(id)addShareeWithPersonNameComponents:(id)arg1 address:(id)arg2 status:(long long)arg3 accessLevel:(long long)arg4 ;
-(void)removeAllSharees;
@end

