/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)fileSize;
-(id)groupIdentifier;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setPicture:(SAWebAcePicture *)arg1 ;
-(SAWebAcePicture *)picture;
-(id)encodedClassName;
-(NSArray *)thumbNails;
-(void)setThumbNails:(NSArray *)arg1 ;
@end

