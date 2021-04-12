/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKSnapshotCacheKey : NSObject <NSCopying> {

	NSString* _identifier;
	long long _interfaceStyle;
	CGRect _bounds;

}

@property (nonatomic,retain) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;              //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
@property (assign,nonatomic) CGRect bounds;                         //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
+(id)keyWithIdentifier:(id)arg1 interfaceStyle:(long long)arg2 bounds:(CGRect)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setInterfaceStyle:(long long)arg1 ;
-(long long)interfaceStyle;
-(id)keyWithOppositeInterfaceStyle;
-(id)initWithIdentifier:(id)arg1 interfaceStyle:(long long)arg2 bounds:(CGRect)arg3 ;
@end

