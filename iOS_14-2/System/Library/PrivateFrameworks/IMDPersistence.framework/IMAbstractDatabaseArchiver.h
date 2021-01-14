/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@class NSString;

@interface IMAbstractDatabaseArchiver : NSObject {

	NSString* _destinationPath;
	NSString* _sourcePath;

}

@property (nonatomic,readonly) NSString * sourcePath;                   //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,readonly) NSString * destinationPath;              //@synthesize destinationPath=_destinationPath - In the implementation block
-(NSString *)destinationPath;
-(NSString *)sourcePath;
-(void)dealloc;
-(id)initWithSourceDatabasePath:(id)arg1 destinationDatabasePath:(id)arg2 ;
-(BOOL)copyDatabase:(/*^block*/id)arg1 ;
-(BOOL)deleteFailedArchiveAtPath:(id)arg1 error:(id*)arg2 ;
@end

