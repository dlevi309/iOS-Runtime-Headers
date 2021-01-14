/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteLimits : FATObject {

	NSNumber* _noteResourceCountMax;
	NSNumber* _uploadLimit;
	NSNumber* _resourceSizeMax;
	NSNumber* _noteSizeMax;
	NSNumber* _uploaded;

}

@property (nonatomic,retain) NSNumber * noteResourceCountMax;              //@synthesize noteResourceCountMax=_noteResourceCountMax - In the implementation block
@property (nonatomic,retain) NSNumber * uploadLimit;                       //@synthesize uploadLimit=_uploadLimit - In the implementation block
@property (nonatomic,retain) NSNumber * resourceSizeMax;                   //@synthesize resourceSizeMax=_resourceSizeMax - In the implementation block
@property (nonatomic,retain) NSNumber * noteSizeMax;                       //@synthesize noteSizeMax=_noteSizeMax - In the implementation block
@property (nonatomic,retain) NSNumber * uploaded;                          //@synthesize uploaded=_uploaded - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setUploaded:(NSNumber *)arg1 ;
-(NSNumber *)uploaded;
-(NSNumber *)uploadLimit;
-(void)setUploadLimit:(NSNumber *)arg1 ;
-(NSNumber *)noteSizeMax;
-(void)setNoteSizeMax:(NSNumber *)arg1 ;
-(NSNumber *)resourceSizeMax;
-(void)setResourceSizeMax:(NSNumber *)arg1 ;
-(NSNumber *)noteResourceCountMax;
-(void)setNoteResourceCountMax:(NSNumber *)arg1 ;
@end

