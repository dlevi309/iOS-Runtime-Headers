/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SKTileStamp : NSObject <NSSecureCoding> {

	unsigned _columns;
	unsigned _rows;
	unsigned* _tileData;

}

@property (nonatomic,readonly) unsigned long long numberOfColumns; 
@property (nonatomic,readonly) unsigned long long numberOfRows; 
@property (nonatomic,readonly) unsigned* tileData; 
+(BOOL)supportsSecureCoding;
+(id)tileStampWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned*)arg3 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setTileData:(unsigned*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned*)arg3 ;
-(unsigned*)tileData;
-(id)tileDefinitionsForTileMap:(id)arg1 ;
@end

