/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MXCallStackThread : NSObject <NSSecureCoding> {

	BOOL _attributedThread;
	NSArray* _topFrames;

}

@property (readonly) BOOL attributedThread;              //@synthesize attributedThread=_attributedThread - In the implementation block
@property (readonly) NSArray * topFrames;                //@synthesize topFrames=_topFrames - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTopCallStackFrames:(id)arg1 isAttributedThread:(BOOL)arg2 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)attributedThread;
-(NSArray *)topFrames;
@end

