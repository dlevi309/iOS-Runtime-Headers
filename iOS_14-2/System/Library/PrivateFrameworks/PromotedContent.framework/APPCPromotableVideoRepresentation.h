/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

@class NSURL;


@protocol APPCPromotableVideoRepresentation <APPCPromotableContentRepresentation>
@property (readonly,nonatomic) NSURL * videoURL; 
@property (readonly,nonatomic) long long fileSize; 
@property (readonly,nonatomic) double skipThreshold; 
@property (readonly,nonatomic) BOOL skipEnabled; 
@property (readonly,nonatomic) BOOL unbranded; 
@property (readonly,nonatomic) double bitrate; 
@property (readonly,nonatomic) unsigned long long signalStrength; 
@property (readonly,nonatomic) long long connectionType; 
@required
-(long long)connectionType;
-(long long)fileSize;
-(double)bitrate;
-(NSURL *)videoURL;
-(unsigned long long)signalStrength;
-(double)skipThreshold;
-(BOOL)skipEnabled;
-(BOOL)unbranded;

@end

