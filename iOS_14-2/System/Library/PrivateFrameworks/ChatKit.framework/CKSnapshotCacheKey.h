/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInterfaceStyle:(long long)arg1 ;
-(CGRect)bounds;
-(id)keyWithOppositeInterfaceStyle;
-(NSString *)stringValue;
-(void)setBounds:(CGRect)arg1 ;
-(long long)interfaceStyle;
-(id)initWithIdentifier:(id)arg1 interfaceStyle:(long long)arg2 bounds:(CGRect)arg3 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

