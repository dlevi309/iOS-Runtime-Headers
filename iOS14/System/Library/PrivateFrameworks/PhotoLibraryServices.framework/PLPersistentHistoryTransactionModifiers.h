/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLPersistentHistoryTransactionModifiers : NSObject {

	BOOL _syncChangeMarker;
	int _changeSource;

}

@property (assign,nonatomic) BOOL syncChangeMarker;              //@synthesize syncChangeMarker=_syncChangeMarker - In the implementation block
@property (assign,nonatomic) int changeSource;                   //@synthesize changeSource=_changeSource - In the implementation block
@property (nonatomic,readonly) BOOL isSyncable; 
+(id)transactionModifiersFromTransactionAuthor:(id)arg1 ;
+(id)transactionAuthorFromChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2 ;
-(id)init;
-(void)setChangeSource:(int)arg1 ;
-(id)_pl_prettyDescriptionWithIndent:(long long)arg1 ;
-(BOOL)isSyncable;
-(id)initWithChangeSource:(int)arg1 syncChangeMarker:(BOOL)arg2 ;
-(id)encodeAsTransactionAuthor;
-(BOOL)updateFromTransactionAuthor:(id)arg1 ;
-(id)_descriptionWithBuilder:(id)arg1 ;
-(BOOL)syncChangeMarker;
-(void)setSyncChangeMarker:(BOOL)arg1 ;
-(id)description;
-(int)changeSource;
@end

