/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MediaServices/MSVAsyncOperation.h>

@protocol MLMediaLibraryAccountChangeObserver;
@class NSString;

@interface _ML3MultiUserAccountChangeOperation : MSVAsyncOperation {

	NSString* _databasePath;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;

}

@property (nonatomic,copy,readonly) NSString * databasePath;                                                    //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic,__weak) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;              //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
-(NSString *)databasePath;
-(void)execute;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(id)initWithDatabasePath:(id)arg1 accountChangeObserver:(id)arg2 ;
@end

