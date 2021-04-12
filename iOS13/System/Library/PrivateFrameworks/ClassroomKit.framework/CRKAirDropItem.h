/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSURL, NSString, NSDictionary;

@interface CRKAirDropItem : NSObject {

	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileName; 
@property (nonatomic,copy,readonly) NSString * UTI; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
-(NSDictionary *)dictionaryRepresentation;
-(NSURL *)fileURL;
-(NSString *)UTI;
-(id)initWithFileURL:(id)arg1 ;
-(NSString *)fileName;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)copyToFolder:(id)arg1 error:(id*)arg2 ;
-(id)moveToFolder:(id)arg1 error:(id*)arg2 ;
@end

