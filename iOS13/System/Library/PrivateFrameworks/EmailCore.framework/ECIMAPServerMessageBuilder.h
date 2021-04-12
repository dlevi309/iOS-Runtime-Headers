/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSSet;


@protocol ECIMAPServerMessageBuilder <ECBaseServerMessageBuilderProtocol>
@property (assign,nonatomic) unsigned imapUID; 
@property (nonatomic,copy) NSSet * labels; 
@required
-(NSSet *)labels;
-(void)setLabels:(id)arg1;
-(unsigned)imapUID;
-(void)setImapUID:(unsigned)arg1;

@end

