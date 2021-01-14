/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLUniformTypeIdentifierIdentity.h>

@class NSString;

@interface PL5551UniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL conformsToRawImage; 
@property (nonatomic,readonly) BOOL conformsToImage; 
@property (nonatomic,readonly) BOOL conformsToMovie; 
@property (getter=isPrimaryImageFormat,nonatomic,readonly) BOOL primaryImageFormat; 
@property (nonatomic,readonly) BOOL isPlayableVideo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlayableVideo;
-(BOOL)conformsToImage;
-(BOOL)isPrimaryImageFormat;
-(BOOL)conformsToRawImage;
-(BOOL)conformsToMovie;
-(NSString *)identifier;
@end

