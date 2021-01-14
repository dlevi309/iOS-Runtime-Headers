/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(NSString *)databasePath;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(id)initWithDatabasePath:(id)arg1 accountChangeObserver:(id)arg2 ;
@end

