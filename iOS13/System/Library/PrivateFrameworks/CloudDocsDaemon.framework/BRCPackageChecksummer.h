/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class BRCChecksummingOutputStream, NSData;

@interface BRCPackageChecksummer : NSObject {

	BRCChecksummingOutputStream* _stream;

}

@property (nonatomic,readonly) NSData * signature; 
-(id)init;
-(NSData *)signature;
-(void)done;
-(BOOL)addItem:(id)arg1 error:(id*)arg2 ;
@end

