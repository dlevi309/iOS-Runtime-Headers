/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)fileName;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(NSString *)UTI;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)copyToFolder:(id)arg1 error:(id*)arg2 ;
-(id)moveToFolder:(id)arg1 error:(id*)arg2 ;
@end

