/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class CNFileManager, CNURLSessionFactory;

@interface CNData : NSObject {

	CNFileManager* _fileManager;
	CNURLSessionFactory* _sessionFactory;

}

@property (nonatomic,readonly) CNFileManager * fileManager;                       //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) CNURLSessionFactory * sessionFactory;              //@synthesize sessionFactory=_sessionFactory - In the implementation block
+(id)dataWithContentsOfURL:(id)arg1 ;
+(id)dataWithContentsOfURL:(id)arg1 sessionFactory:(id)arg2 ;
+(id)dataWithContentsOfFileURL:(id)arg1 ;
+(id)observableWithContentsOfURL:(id)arg1 sessionFactory:(id)arg2 ;
+(id)observableWithContentsOfURL:(id)arg1 ;
+(id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 fileManager:(id)arg4 ;
+(unsigned long long)NSDataWritingOptionsFromCNDataWritingOptions:(unsigned long long)arg1 ;
+(id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 ;
-(CNFileManager *)fileManager;
-(id)dataWithContentsOfURL:(id)arg1 ;
-(id)init;
-(id)initWithFileManager:(id)arg1 ;
-(CNURLSessionFactory *)sessionFactory;
-(id)initWithFileManager:(id)arg1 urlSessionFactory:(id)arg2 ;
-(id)observableWithContentsOfURL:(id)arg1 ;
-(id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 ;
@end

