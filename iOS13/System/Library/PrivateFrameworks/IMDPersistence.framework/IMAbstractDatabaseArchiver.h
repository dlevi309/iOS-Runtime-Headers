/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@class NSString;

@interface IMAbstractDatabaseArchiver : NSObject {

	NSString* _destinationPath;
	NSString* _sourcePath;

}

@property (nonatomic,readonly) NSString * sourcePath;                   //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,readonly) NSString * destinationPath;              //@synthesize destinationPath=_destinationPath - In the implementation block
-(void)dealloc;
-(NSString *)destinationPath;
-(id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 ;
-(BOOL)copyDatabase:(/*^block*/id)arg1 ;
-(BOOL)deleteFailedArchiveAtPath:(id)arg1 error:(id*)arg2 ;
-(NSString *)sourcePath;
@end

