/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLPersistentHistoryTransactionModifiers : NSObject {

	BOOL _syncChangeMarker;
	int _changeSource;

}

@property (assign,nonatomic) BOOL syncChangeMarker;              //@synthesize syncChangeMarker=_syncChangeMarker - In the implementation block
@property (assign,nonatomic) int changeSource;                   //@synthesize changeSource=_changeSource - In the implementation block
@property (nonatomic,readonly) BOOL isSyncable; 
+(id)transactionAuthorFromChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2 ;
+(id)transactionModifiersFromTransactionAuthor:(id)arg1 ;
-(id)init;
-(id)description;
-(id)initWithChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2 ;
-(id)encodeAsTransactionAuthor;
-(BOOL)updateFromTransactionAuthor:(id)arg1 ;
-(BOOL)isSyncable;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(id)_descriptionWithBuilder:(id)arg1 ;
-(BOOL)syncChangeMarker;
-(void)setSyncChangeMarker:(BOOL)arg1 ;
-(int)changeSource;
-(void)setChangeSource:(int)arg1 ;
@end

