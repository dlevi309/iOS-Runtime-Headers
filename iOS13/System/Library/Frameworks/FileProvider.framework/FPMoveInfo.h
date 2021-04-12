/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FPActionOperationLocator, NSArray;

@interface FPMoveInfo : FPActionOperationInfo <NSSecureCoding> {

	BOOL _shouldBounce;
	BOOL _byCopy;
	FPActionOperationLocator* _targetFolder;
	NSArray* _rootFilenames;
	unsigned long long _lastUsedDatePolicy;

}

@property (nonatomic,retain) FPActionOperationLocator * targetFolder;              //@synthesize targetFolder=_targetFolder - In the implementation block
@property (nonatomic,retain) NSArray * rootFilenames;                              //@synthesize rootFilenames=_rootFilenames - In the implementation block
@property (assign,nonatomic) unsigned long long lastUsedDatePolicy;                //@synthesize lastUsedDatePolicy=_lastUsedDatePolicy - In the implementation block
@property (assign,nonatomic) BOOL shouldBounce;                                    //@synthesize shouldBounce=_shouldBounce - In the implementation block
@property (assign,nonatomic) BOOL byCopy;                                          //@synthesize byCopy=_byCopy - In the implementation block
@property (nonatomic,readonly) BOOL byMoving; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)byCopy;
-(BOOL)shouldBounce;
-(unsigned long long)lastUsedDatePolicy;
-(void)setRootFilenames:(NSArray *)arg1 ;
-(void)setTargetFolder:(FPActionOperationLocator *)arg1 ;
-(void)setLastUsedDatePolicy:(unsigned long long)arg1 ;
-(void)setShouldBounce:(BOOL)arg1 ;
-(void)setByCopy:(BOOL)arg1 ;
-(FPActionOperationLocator *)targetFolder;
-(NSArray *)rootFilenames;
-(BOOL)byMoving;
-(id)initWithOperationID:(id)arg1 roots:(id)arg2 rootFilenames:(id)arg3 targetFolder:(id)arg4 lastUsedDatePolicy:(unsigned long long)arg5 bounce:(BOOL)arg6 byCopy:(BOOL)arg7 ;
@end

