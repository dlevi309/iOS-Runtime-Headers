/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

@class NSString;


@protocol PLUniformTypeIdentifierIdentity <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL conformsToRawImage; 
@property (nonatomic,readonly) BOOL conformsToImage; 
@property (nonatomic,readonly) BOOL conformsToMovie; 
@property (getter=isPrimaryImageFormat,nonatomic,readonly) BOOL primaryImageFormat; 
@property (nonatomic,readonly) BOOL isPlayableVideo; 
@required
-(NSString *)identifier;
-(BOOL)conformsToMovie;
-(BOOL)conformsToImage;
-(BOOL)isPlayableVideo;
-(BOOL)isPrimaryImageFormat;
-(BOOL)conformsToRawImage;

@end

