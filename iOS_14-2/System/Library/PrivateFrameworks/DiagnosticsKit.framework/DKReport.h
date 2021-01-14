/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)components;
-(id)description;
-(id)initWithComponents:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)arrayForJSON;
-(id)reportByMergingReport:(id)arg1 ;
@end

