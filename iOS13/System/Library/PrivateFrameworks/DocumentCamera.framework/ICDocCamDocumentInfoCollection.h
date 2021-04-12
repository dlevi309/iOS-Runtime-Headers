/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@class NSString, NSDate, NSMutableArray;

@interface ICDocCamDocumentInfoCollection : NSObject {

	NSString* _title;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSString* _uniqueIdentifier;
	NSMutableArray* _docInfos;

}

@property (nonatomic,readonly) long long docCamPDFVersion; 
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                 //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * docInfos;                 //@synthesize docInfos=_docInfos - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)bumpModificationDate;
-(long long)docCamPDFVersion;
-(NSMutableArray *)docInfos;
-(void)setDocInfos:(NSMutableArray *)arg1 ;
@end

