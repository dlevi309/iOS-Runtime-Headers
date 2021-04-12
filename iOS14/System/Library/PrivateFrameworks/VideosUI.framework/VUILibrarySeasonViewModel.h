/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol VUIMediaEntityIdentifier;
@class NSObject, NSString;

@interface VUILibrarySeasonViewModel : NSObject <NSCopying> {

	NSObject*<VUIMediaEntityIdentifier> _seasonIdentifier;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSObject*<VUIMediaEntityIdentifier> seasonIdentifier;              //@synthesize seasonIdentifier=_seasonIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                           //@synthesize type=_type - In the implementation block
-(unsigned long long)type;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSObject*<VUIMediaEntityIdentifier>)seasonIdentifier;
-(id)initWithSeasonIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
@end

