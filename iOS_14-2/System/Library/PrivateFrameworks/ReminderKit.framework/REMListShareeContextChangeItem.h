/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class REMListChangeItem, NSArray;

@interface REMListShareeContextChangeItem : NSObject {

	REMListChangeItem* _listChangeItem;

}

@property (nonatomic,retain) REMListChangeItem * listChangeItem;              //@synthesize listChangeItem=_listChangeItem - In the implementation block
@property (nonatomic,readonly) NSArray * sharees; 
-(id)addShareeWithPersonNameComponents:(id)arg1 address:(id)arg2 status:(long long)arg3 accessLevel:(long long)arg4 ;
-(id)addShareeWithDisplayName:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 namePrefix:(id)arg5 nameSuffix:(id)arg6 nickname:(id)arg7 address:(id)arg8 status:(long long)arg9 accessLevel:(long long)arg10 ;
-(NSArray *)sharees;
-(void)addSharee:(id)arg1 ;
-(void)removeSharee:(id)arg1 ;
-(REMListChangeItem *)listChangeItem;
-(void)setListChangeItem:(REMListChangeItem *)arg1 ;
-(id)initWithListChangeItem:(id)arg1 ;
-(void)removeAllSharees;
-(id)addShareeWithDisplayName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 address:(id)arg4 status:(long long)arg5 accessLevel:(long long)arg6 ;
@end

