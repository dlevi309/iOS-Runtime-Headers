/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/


#import <CloudDocsUI/CloudDocsUI-Structs.h>
@class NSObject;

@interface _UIDocumentPickerContainerItemThumbnailKey : NSObject {

	NSObject* _primaryKey;
	double _scale;
	CGSize _size;

}

@property (nonatomic,readonly) NSObject * primaryKey;              //@synthesize primaryKey=_primaryKey - In the implementation block
@property (nonatomic,readonly) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                       //@synthesize scale=_scale - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(double)scale;
-(NSObject *)primaryKey;
-(id)initWithPrimaryKey:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
@end

