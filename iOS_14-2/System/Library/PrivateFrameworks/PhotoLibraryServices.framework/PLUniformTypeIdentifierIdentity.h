/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
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
-(BOOL)isPlayableVideo;
-(BOOL)conformsToImage;
-(BOOL)isPrimaryImageFormat;
-(BOOL)conformsToRawImage;
-(BOOL)conformsToMovie;
-(NSString *)identifier;

@end

