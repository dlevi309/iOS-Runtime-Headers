/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImageSymbolConfiguration;

@interface _TVImageSymbolDescription : NSObject <NSCopying> {

	NSString* _symbolName;
	UIImageSymbolConfiguration* _imageSymbolConfiguration;

}

@property (nonatomic,copy,readonly) NSString * symbolName;                                       //@synthesize symbolName=_symbolName - In the implementation block
@property (nonatomic,retain) UIImageSymbolConfiguration * imageSymbolConfiguration;              //@synthesize imageSymbolConfiguration=_imageSymbolConfiguration - In the implementation block
-(NSString *)symbolName;
-(UIImageSymbolConfiguration *)imageSymbolConfiguration;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImageSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(id)initWithSymbolName:(id)arg1 imageSymbolConfiguration:(id)arg2 ;
@end

