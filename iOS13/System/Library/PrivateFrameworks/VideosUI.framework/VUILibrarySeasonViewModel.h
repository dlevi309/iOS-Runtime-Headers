/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol VUIMediaEntityIdentifier;
@class NSObject;

@interface VUILibrarySeasonViewModel : NSObject <NSCopying> {

	NSObject*<VUIMediaEntityIdentifier> _seasonIdentifier;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSObject*<VUIMediaEntityIdentifier> seasonIdentifier;              //@synthesize seasonIdentifier=_seasonIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSObject*<VUIMediaEntityIdentifier>)seasonIdentifier;
-(id)initWithSeasonIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
@end

