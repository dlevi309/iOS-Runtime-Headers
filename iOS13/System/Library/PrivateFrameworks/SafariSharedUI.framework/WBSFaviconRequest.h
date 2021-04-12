/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSSiteMetadataRequest.h>
#import <libobjc.A.dylib/WBSIconRequest.h>

@class NSString;

@interface WBSFaviconRequest : WBSSiteMetadataRequest <WBSIconRequest>

@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) CGSize iconSize; 
@property (nonatomic,readonly) unsigned long long fallbackType; 
@property (nonatomic,readonly) BOOL isURLTypedByUser; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize sizeForDrawing; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
-(unsigned long long)type;
-(NSString *)uniqueIdentifier;
-(CGSize)iconSize;
-(unsigned long long)fallbackType;
-(CGSize)sizeForDrawing;
-(id)_initWithURL:(id)arg1 type:(unsigned long long)arg2 iconSize:(CGSize)arg3 fallbackType:(unsigned long long)arg4 isURLTypedByUser:(BOOL)arg5 ;
-(id)initWithURL:(id)arg1 extraInfo:(id)arg2 ;
-(id)initWithDomain:(id)arg1 iconSize:(CGSize)arg2 fallbackType:(unsigned long long)arg3 ;
-(id)initWithURL:(id)arg1 iconSize:(CGSize)arg2 fallbackType:(unsigned long long)arg3 ;
-(id)initWithURL:(id)arg1 iconSize:(CGSize)arg2 fallbackType:(unsigned long long)arg3 isURLTypedByUser:(BOOL)arg4 ;
-(BOOL)isURLTypedByUser;
@end

