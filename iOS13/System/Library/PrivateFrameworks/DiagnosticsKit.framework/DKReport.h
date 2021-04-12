/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DKReport : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _components;

}

@property (nonatomic,readonly) NSArray * components;              //@synthesize components=_components - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)reportWithComponents:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)components;
-(id)initWithComponents:(id)arg1 ;
-(id)arrayForJSON;
-(id)reportByMergingReport:(id)arg1 ;
@end

