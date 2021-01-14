/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)modificationDate;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSDate *)creationDate;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)bumpModificationDate;
-(NSString *)title;
-(long long)docCamPDFVersion;
-(NSMutableArray *)docInfos;
-(void)setDocInfos:(NSMutableArray *)arg1 ;
@end

