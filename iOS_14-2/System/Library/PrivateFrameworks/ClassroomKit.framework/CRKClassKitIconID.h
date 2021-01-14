/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString;

@interface CRKClassKitIconID : NSObject {

	NSString* _mascotIdentifier;
	NSString* _colorIdentifier;

}

@property (nonatomic,copy) NSString * mascotIdentifier;                  //@synthesize mascotIdentifier=_mascotIdentifier - In the implementation block
@property (nonatomic,copy) NSString * colorIdentifier;                   //@synthesize colorIdentifier=_colorIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)stringBySanitizingString:(id)arg1 ;
-(id)init;
-(NSString *)stringValue;
-(id)initWithClass:(id)arg1 ;
-(id)initWithIconID:(id)arg1 ;
-(id)initWithMascotIdentifier:(id)arg1 colorIdentifier:(id)arg2 ;
-(NSString *)mascotIdentifier;
-(NSString *)colorIdentifier;
-(void)setMascotIdentifier:(NSString *)arg1 ;
-(void)setColorIdentifier:(NSString *)arg1 ;
@end

