/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAWebWebResult.h>

@class NSNumber, SAWebAcePicture, NSArray;

@interface SAWebImageResult : SAWebWebResult

@property (nonatomic,copy) NSNumber * fileSize; 
@property (nonatomic,retain) SAWebAcePicture * picture; 
@property (nonatomic,copy) NSArray * thumbNails; 
+(id)imageResult;
+(id)imageResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)thumbNails;
-(void)setThumbNails:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)fileSize;
-(SAWebAcePicture *)picture;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setPicture:(SAWebAcePicture *)arg1 ;
@end

